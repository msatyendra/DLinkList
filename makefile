Emp.out:Menu.o Sync.o AddB.o AddL.o AddS.o Disp.o Rdis.o DelB.o DelL.o DelD.o RList.o Save.o
	cc Menu.o Sync.o AddB.o AddL.o AddS.o Disp.o Rdis.o DelB.o DelL.o DelD.o RList.o Save.o
Menu.o:Menu.c
	cc -c Menu.c
Sync.o:Sync.c
	cc -c Sync.c
AddB.o:AddB.c
	cc -c AddB.c
AddL.o:AddL.c
	cc -c AddL.c
AddS.o:AddS.c
	cc -c AddS.c
Disp.o:Disp.c
	cc -c Disp.c
Rdis.o:Rdis.c
	cc -c Rdis.c
DelB.o:DelB.c
	cc -c DelB.c
DelL.o:DelL.c
	cc -c DelL.c
DelD.o:DelD.c
	cc -c DelD.c
RList.o:RList.c
	cc -c RList.c
Save.o:Save.c
	cc -c Save.c
