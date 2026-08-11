# Dinamik Bellek Yönetimi CLI

[![English](https://img.shields.io/badge/Language-English-blue.svg?style=for-the-badge)](README.md)
[![Türkçe](https://img.shields.io/badge/Dil-T%C3%BCrk%C3%A7e-red.svg?style=for-the-badge)](README-tr.md)

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)
![Build Status](https://img.shields.io/github/actions/workflow/status/iemirakman/cpp-memory-management-cli/build.yml?style=for-the-badge)

## Projenin Amacı ve Vizyonu
Teorik soyutlamaların arkasına saklanmak yerine, belleğin kaputun altında nasıl çalıştığını anlamak için geliştirdiğim modüler bir C++ CLI uygulamasıdır. 

Bu proje; dinamik bellek tahsisi, pointer manipülasyonu ve kaynak yönetimi gibi temel bilgisayar bilimleri konseptlerini doğrudan pratik etmek amacıyla inşa edilmiştir. Yüksek seviyeli soyutlamalara bel bağlamak yerine, bellek mimarisiyle doğrudan etkileşime girerek RAM üzerinde manuel işlem yapmayı ve çalışma zamanında "sıfır bellek sızıntısı" (zero memory leak) prensibini uygulamayı hedefler.

## Temel Özellikler
* **Dinamik Bellek Tahsisi (Dynamic Allocation):** Kullanıcı girdisine dayalı olarak çalışma zamanında (runtime) heap üzerinde dinamik diziler oluşturur ve RAM kaynaklarını doğrudan yönetir.
* **Bellek Üzerinde Pointer Çevirimi (In-place Reversal):** Veri yapılarını, ikinci bir dizi veya ek bellek kullanmadan, tamamen pointer (işaretçi) takası ile tersine çevirerek bellek kullanımını ve işlem hızını optimize eder.
* **İteratif Algoritma Tasarımı:** Faktöriyel hesaplamaları gibi işlemlerde, saf (naive) özyinelemeli (recursive) yaklaşımların aksine call-stack taşmalarını önlemek ve O(1) alan karmaşıklığını (space complexity) korumak için iteratif yöntemler kullanır.
* **Katı Bellek Sızıntısı Kontrolü:** Uygulama döngüsü içerisinde katı `delete[]` protokolleri uygulayarak, sistem kaynaklarının uygulama kapanmadan önce işletim sistemine güvenli bir şekilde iade edilmesini garanti eder.

## Proje Mimarisi
Proje, iş mantığı ile yürütme süreçlerini birbirinden ayıran modüler bir tasarım prensibine sadık kalınarak yapılandırılmıştır:
* `main.cpp`: Uygulama döngüsünü, kullanıcı I/O yönlendirmelerini ve nihai bellek temizliğini yönetir.
* `operations.h`: Fonksiyon imzalarını barındırarak sistemin sözleşmesi (contract) görevini görür.
* `operations.cpp`: Temel algoritmik mantığı ve pointer manipülasyonlarını içerir.

## Derleme ve Çalıştırma

### Derleme Adımı
Kaynak kodunu çalıştırılabilir bir dosyaya derlemek için bilgisayarınızda standart bir C++ derleyicisinin (`g++` veya `clang++` gibi) kurulu olduğundan emin olun. Terminalinizde aşağıdaki komutu çalıştırın:

```bash
g++ main.cpp operations.cpp -o memory_cli