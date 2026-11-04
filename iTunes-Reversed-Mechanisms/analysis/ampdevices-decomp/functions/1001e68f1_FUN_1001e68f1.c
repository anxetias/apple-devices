// name: FUN_1001e68f1
// address: 1001e68f1

undefined8
FUN_1001e68f1(short *param_1,ulong param_2,short *param_3,ulong param_4,int param_5,
             undefined4 *param_6)

{
  short sVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  
  if (param_1 == (short *)0x0 || param_3 == (short *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bfce2(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    psVar6 = param_1 + ((param_2 & 0xffffffff) - 1);
    psVar8 = param_3 + ((param_4 & 0xffffffff) - 1);
    uVar3 = 0;
    uVar4 = 0;
    psVar5 = param_3;
    if (param_3 <= psVar8 && param_1 <= psVar6) {
      do {
        psVar7 = param_1 + 1;
        sVar1 = *param_1;
        uVar4 = uVar3;
        if (sVar1 == 10) {
LAB_1001e695d:
          if (param_5 == 3) {
            if (psVar8 <= psVar5) break;
            psVar5[0] = 0xd;
            psVar5[1] = 10;
            psVar5 = psVar5 + 2;
          }
          else {
            if (param_5 == 2) {
              *psVar5 = 10;
            }
            else {
              if (param_5 != 1) {
                uVar4 = 0xffffffce;
                break;
              }
              *psVar5 = 0xd;
            }
            psVar5 = psVar5 + 1;
          }
        }
        else {
          if (sVar1 == 0xd) {
            if ((psVar7 <= psVar6) && (param_1[1] == 10)) {
              psVar7 = param_1 + 2;
            }
            goto LAB_1001e695d;
          }
          *psVar5 = sVar1;
          psVar5 = psVar5 + 1;
        }
        if ((psVar6 < psVar7) || (param_1 = psVar7, psVar8 < psVar5)) break;
      } while( true );
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = (int)((ulong)((long)psVar5 - (long)param_3) >> 1);
    }
  }
  return uVar4;
}

