# Libft

**Libft**, C dilinde yazılmış bir standart kütüphane uygulamasıdır. Bu proje, temel C fonksiyonlarını yeniden oluşturarak C programlama becerilerini geliştirmeyi ve düşük seviyeli programlamayı daha iyi anlamayı amaçlamaktadır. Bu kütüphane, daha ileri projelerde kullanmak için temel işlevsellik sağlar.

## İçerik

- [Özellikler](#özellikler)
- [Kurulum](#kurulum)
- [Kullanım](#kullanım)
- [Fonksiyonlar](#fonksiyonlar)

## Özellikler

- Standart C kütüphane fonksiyonlarının benzerlerini içerir (örn. `memset`, `strdup`, `atoi`, vb.).
- Ekstra yardımcı fonksiyonlar ve veri yapıları sağlar.
- Eğitim amaçlı yazılmış olup başka projelerle entegre edilebilir.

## Kurulum

Bu kütüphaneyi kendi projenizde kullanmak için aşağıdaki adımları izleyin:

1. Bu projeyi klonlayın:
   ```bash
   git clone https://github.com/kullanıcı_adı/libft.git
2. Kütüphaneyi derleyin:
   ```bash
   make
3. libft.a dosyasını projenize ekleyin.

## Kullanım

Kütüphaneyi projenize dahil etmek için aşağıdaki örnekte olduğu gibi `libft.h` başlık dosyasını ekleyin:
```c
   #include "libft.h"

   int main() {
       // Libft fonksiyonlarını kullanarak örnek bir kod yazın
       return 0;
   }
```

## Fonksiyonlar

Libft, aşağıdaki kategorilerde işlevler sunar:

String Manipülasyon Fonksiyonları: ft_strlen, ft_strdup, ft_strjoin, vb.

Bellek Yönetim Fonksiyonları: ft_memset, ft_memcpy, ft_memmove, vb. 

Karakter Kontrol Fonksiyonları: ft_isalpha, ft_isdigit, ft_isalnum, vb. 

Liste Fonksiyonları: Tek yönlü bağlı liste fonksiyonları (ft_lstnew, ft_lstadd, ft_lstdel, vb.) 

Fonksiyonların tam listesi ve ayrıntılı açıklamaları için kodun içerisine göz atabilirsiniz 
