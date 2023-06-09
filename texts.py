import gettext
import json
import os

if not os.path.isfile('setts.json'):
    with open('setts.json', 'w') as file:
        data = {"settings": {"theme": "Dark",
                             "p": "270",
                             "h": "3",
                             "d": "1.5",
                             "st": "1500",
                             "mk": "1000",
                             "a": "0",
                             "spi": "3",
                             "marg": "0",
                             "locale": "Ru",
                             "currency": "руб."}}
        json.dump(data, file, indent=2)

with open('setts.json') as file:
    old_data = json.load(file)
    if old_data['settings']["locale"] == 'English':
        locale = 'en_US'
    else:
        locale = 'ru_RU'

lang = gettext.translation('locale', localedir='locale', languages=[locale])
lang.install()
_ = lang.gettext

calc = (_("Формула расчета стоимости печати выглядит так:\n\n"
          "S = ((p/1000*t/60*h)+(md*d*st/mk)+am+post))*x+mod\n\n"
          "где:\n"
          "S - стоимость печати, руб.\n"
          "p - мощность принтера, Вт\n"
          "t - время печати, мин.\n"
          "h - тариф на электроэнергию, кВт/ч\n"
          "md - вес детали, гр.\n"
          "st - стоимость катушки пластика, руб.\n"
          "mk - вес пластика в катушке, гр.\n"
          "d - коэффициент выбраковки\n"
          "am - амортизация, руб.\n"
          "post - стоимость постобработки, руб.\n"
          "х - количество печатаемых дубликатов, шт.\n"
          "mod - стоимость моделирования, руб.\n\n"
          "При этом в расчете вес детали, умножается на 1.5,\n"
          "это сделано для выбраковки и тестовой печати,"
          "т.е. при калькуляции вес одной детали для печати\n"
          "считается как 1,5 детали "
          "Можете изменить этот пункт в настройках.\n\n"))

about = (_("По вопросам и предложениям писать в телеграм на @RisenYT\n\n"))

amortization_calc = (_('Как считается амортизация:\n\n'
                       'Отчисления записываются \n'
                       'частями в зависимости от времени \n'
                       'печати конкретного изделия\n'
                       'Рекомендую задавать СПИ (это время\n'
                       'окупаемости принтера) 3 года.\n'
                       'Калькулятор считает амортизацию в\n'
                       'минуту и умножает на количество минут,\n'
                       'которые принтер будет печатать.'))

not_connect = (_('Невозможно проверить обновление.\n\n'
                 'Отсутствует подключение к интернету\n'
                 'или программа заблокирована фаерволом.\n\n'
                 'Для продолжения работы нажмите "Ok"'))

new_sets = (_('Задайте стоимость принтера, \n'
              'срок полезного использования\n'
              'в настройках амортизации\n'))

new_marge = (_('Задайте процент желаемой наценки\n'
               'в настройках (можно просто проставить ноль)'))

ver = '0.6.1'
