//PRAKTIKUM 1 OS

[[ system.c ]]

/1.Buat program untuk menjalankan perintah 'ps -A'!

#include <stdlib.h>
#include <stdio.h>

int main()
{
	puts("Menjalankan Perintah");

	system("ps -A");

	puts("Alhamdulillah");

return 0;
}


/2.Buat program untuk mencetak kalender bulan Desember!

#include <stdlib.h>
#include <stdio.h>

int main()
{
	puts("Running command");

	system(" cal 12 2019 ");   // ical untuk tahun hijriah // ncal transpose

	puts("Done");

return 0;
}




[[exec.c]]

/3. Buat program untuk mencetak kalender bulan Desember!
#include <unistd.h>
#include <stdio.h>

//exec.c

int main()
{
	puts("Running command");

	execlp("cal", "cal", "12", "2019", NULL);

	puts("Done");

return 0;
}


/4. Buat program menjalankan ps-A



