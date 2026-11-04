// name: FUN_1001672b9
// address: 1001672b9

bool FUN_1001672b9(long param_1,undefined8 *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 local_60;
  char local_58;
  byte local_57;
  char local_56 [30];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006746ba(uVar4);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != 0) {
      cVar1 = _CFStringGetCString(param_1,&local_58,0x20,0x600);
      if (cVar1 == '\0') {
LAB_1001673a4:
        sVar2 = FUN_1001e184b();
        if (sVar2 != 0x30) {
          lVar5 = _CFLocaleCopyCurrent();
          if (lVar5 != 0) {
            bVar10 = false;
            lVar6 = _CFNumberFormatterCreate(DAT_1008c4d90,lVar5,0);
            if (lVar6 != 0) {
              bVar10 = false;
              lVar7 = _CFNumberFormatterCreateNumberFromString(DAT_1008c4d90,lVar6,param_1,0,0);
              if (lVar7 != 0) {
                cVar1 = _CFNumberGetValue(lVar7,4,&local_60);
                bVar10 = cVar1 != '\0';
                FUN_10017060f(lVar7);
              }
              FUN_10017060f(lVar6);
            }
            FUN_10017060f(lVar5);
            goto LAB_100167438;
          }
        }
        bVar10 = false;
      }
      else {
        if ((local_58 == '0') && ((local_57 & 0xdf) == 0x58)) {
          pcVar9 = local_56;
          pcVar8 = "%llX";
        }
        else {
          pcVar8 = "%lld";
          pcVar9 = &local_58;
        }
        iVar3 = _sscanf(pcVar9,pcVar8,&local_60);
        bVar10 = true;
        if (iVar3 != 1) goto LAB_1001673a4;
      }
LAB_100167438:
      *param_2 = local_60;
      goto LAB_10016743f;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100674644(uVar4);
    }
  }
  bVar10 = false;
  FUN_1001782e9(0,0);
LAB_10016743f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

