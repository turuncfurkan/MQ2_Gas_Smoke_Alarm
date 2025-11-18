# MQ-2 Gaz ve Duman Alarm Sistemi – Arduino

## Proje Özeti

Bu proje, Arduino ve MQ-2 gaz/duman sensörü kullanarak ev veya ofis için mini bir güvenlik alarm sistemi geliştirmeyi amaçlar.

Sistem, ortamda gaz veya duman yoğunluğu belirli bir eşik değerin üzerine çıktığında:

- Kırmızı LED yanar
- Pasif buzzer siren sesi verir

Sensör hassasiyeti artırılmış ve pasif buzzer ile gerçekçi bir alarm efekti elde edilmiştir. Proje hem donanım hem yazılım açısından temel gömülü sistem deneyimi sunar.

## Kullanılan Malzemeler

- Arduino Uno  
- MQ-2 Gaz ve Duman Sensörü  
- Pasif Buzzer  
- LED  
- Dirençler (220Ω vb.)  
- Jumper kablolar  
- Breadboard  

## Devre Bağlantıları

- **MQ-2 Sensör**
  - VCC → 5V
  - GND → GND
  - A0 → A0

- **LED**
  - Uzun bacak (+) → D8
  - Kısa bacak (–) → 220Ω direnç → GND

- **Pasif Buzzer**
  - – → GND  
  - Orta pin → 5V  
  - S (Signal) → D9  

## Arduino Kodu

Kod dosyası: `MQ2_Gas_Alarm.ino`

## Öğrenim Kazanımları

- Arduino ile sensör entegrasyonu  
- Analog sensör verisini filtreleme (ortalama alma)  
- Eşik değere göre alarm sistemi tasarlama  
- Projeyi GitHub üzerinde dokümante etme
