#include <stdio.h>

struct mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    struct mahasiswa mhs1, mhs2;

    mhs1.name = "Adan";
    mhs1.address = "Cirebon";
    mhs1.age = 18;
    mhs2.name = "Ahmadan";
    mhs2.address = "Purwokerto";
    mhs2.age = 18;

    printf("##mahasiswa 1 ##\n");
    printf("nama : %s\n", mhs1.name);
    printf("alamat : %s\n", mhs1.address);
    printf("nama : %d\n", mhs1.age);
    printf("##mahasiswa 2 ##\n");
    printf("nama : %s\n", mhs2.name);
    printf("alamat : %s\n", mhs2.address);
    printf("nama : %d\n", mhs2.age);

    return 0;

}