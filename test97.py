import pygame  # استيراد مكتبة pygame لإنشاء الألعاب
import random  # استيراد مكتبة random لتوليد مواقع عشوائية

# تهيئة مكتبة pygame
pygame.init()

# إعداد الشاشة (العرض والطول)
screen_width = 800  # عرض الشاشة
screen_height = 600  # ارتفاع الشاشة
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("لعبة سباق السيارات")

# إعداد الألوان
white = (255, 255, 255)  # اللون الأبيض
black = (0, 0, 0)  # اللون الأسود
red = (255, 0, 0)  # اللون الأحمر
blue = (0, 0, 255)  # اللون الأزرق

# إعداد الساعة لتحديث الإطارات
clock = pygame.time.Clock()

# تحميل الصور (السيارة الخاصة بك وسيارة الخصم)
player_car = pygame.image.load("player_car.png")  # صورة سيارة اللاعب
enemy_car = pygame.image.load("enemy_car.png")  # صورة سيارة الخصم

# دالة لعرض النصوص على الشاشة
def display_message(text, font_size, color, x, y):
    font = pygame.font.Font(None, font_size)  # اختيار الخط وحجمه
    message = font.render(text, True, color)  # إنشاء النص
    screen.blit(message, (x, y))  # عرض النص على الشاشة

# دالة اللعبة الرئيسية
def game_loop():
    # إعداد مواقع البداية للسيارات
    player_x = screen_width // 2
    player_y = screen_height - 100
    
    enemy_x = random.randint(0, screen_width - 50)
    enemy_y = -100

    # سرعة حركة السيارات
    enemy_speed = 5
    player_speed = 10

    # حالة اللعبة
    running = True

    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:  # عند إغلاق اللعبة
                running = False

        # الحصول على المفاتيح المضغوطة
        keys = pygame.key.get_pressed()

        # التحكم بحركة سيارة اللاعب
        if keys[pygame.K_LEFT] and player_x > 0:
            player_x -= player_speed
        if keys[pygame.K_RIGHT] and player_x < screen_width - 50:
            player_x += player_speed
        if keys[pygame.K_UP] and player_y > 0:
            player_y -= player_speed
        if keys[pygame.K_DOWN] and player_y < screen_height - 100:
            player_y += player_speed

        # تحديث موقع سيارة الخصم
        enemy_y += enemy_speed

        # إعادة تعيين موقع سيارة الخصم إذا خرجت من الشاشة
        if enemy_y > screen_height:
            enemy_y = -100
            enemy_x = random.randint(0, screen_width - 50)

        # التحقق من التصادم
        if (player_x < enemy_x + 50 and player_x + 50 > enemy_x and
                player_y < enemy_y + 100 and player_y + 100 > enemy_y):
            while True:
                screen.fill(white)  # تعبئة الشاشة باللون الأبيض
                display_message("Game Over!", 50, red, screen_width // 2 - 100, screen_height // 2)
                display_message("Press R to Restart or Q to Quit", 30, black, screen_width // 2 - 150, screen_height // 2 + 50)
                pygame.display.update()

                for event in pygame.event.get():
                    if event.type == pygame.QUIT:
                        pygame.quit()
                        exit()
                    if event.type == pygame.KEYDOWN:
                        if event.key == pygame.K_r:
                            return  # إعادة تشغيل الحلقة الأساسية
                        if event.key == pygame.K_q:
                            pygame.quit()
                            exit()

        # رسم الشاشة وتحديثها
        screen.fill(white)  # تعبئة الشاشة باللون الأبيض
        screen.blit(player_car, (player_x, player_y))  # رسم سيارة اللاعب
        screen.blit(enemy_car, (enemy_x, enemy_y))  # رسم سيارة الخصم

        pygame.display.update()  # تحديث الشاشة
        clock.tick(60)  # ضبط معدل الإطارات

# بدء اللعبة
while True:
    game_loop()

# إنهاء اللعبة
pygame.quit()
