// name: FUN_1001c147c
// address: 1001c147c

void FUN_1001c147c(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (DAT_1008a2168 < 1) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a52e3(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    LOCK();
    DAT_1008a2168 = DAT_1008a2168 + -1;
    UNLOCK();
    if (DAT_1008a2168 == 0) {
      iVar5 = -100;
      puVar6 = &DAT_1008a20b0;
      do {
        if ((code *)*puVar6 == (code *)0x0) {
          if ((long *)puVar6[6] != (long *)0x0) {
            (**(code **)(*(long *)puVar6[6] + 0x30))();
            plVar1 = (long *)puVar6[6];
            puVar6[6] = 0;
            if (puVar6 + 2 == plVar1) {
              lVar3 = 0x20;
            }
            else {
              lVar3 = 0x28;
              if (plVar1 == (long *)0x0) goto LAB_1001c1506;
            }
            (**(code **)(*plVar1 + lVar3))();
          }
        }
        else {
          (*(code *)*puVar6)(puVar6[9],puVar6[10],puVar6[0xb]);
          *puVar6 = 0;
        }
LAB_1001c1506:
        puVar6 = puVar6 + -0xc;
        iVar5 = iVar5 + 1;
        if (iVar5 == 0) {
          FUN_1001ea585();
          FUN_1001b811c(&DAT_1008a2110);
          FUN_1001e9d75(&DAT_1008a2120);
          return;
        }
      } while( true );
    }
  }
  return;
}

