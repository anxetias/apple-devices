// name: FUN_1001845f5
// address: 1001845f5

uint FUN_1001845f5(char *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 local_4d8 [80];
  char *local_488;
  long local_480;
  char *local_478;
  undefined4 local_46c;
  char *local_468;
  uint local_460;
  char local_459;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_459 = param_1[9];
  local_460 = (uint)CONCAT71((int7)((ulong)local_38 >> 8),local_459 != '\0');
  uVar4 = *(uint *)(param_1 + 0x270);
  uVar7 = CONCAT71((int7)((ulong)param_3 >> 8),1);
  local_478 = (char *)0x0;
  pcVar8 = param_1;
  uVar6 = uVar4;
  local_468 = param_1;
  do {
    local_46c = (undefined4)uVar7;
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else {
      lVar11 = 0x620;
      lVar9 = 0;
      uVar10 = 0;
      do {
        lVar1 = *(long *)(pcVar8 + 0x278);
        *(long *)(pcVar8 + 0x268) = lVar1 + lVar11;
        if ((*(byte *)(lVar1 + 0x498 + lVar11) & 1) != 0) {
          param_1 = (char *)(lVar1 + lVar11 + -0x620);
          local_480 = lVar1 + lVar11;
          FUN_1001c62d9(local_4d8,0x50);
          local_488 = param_1;
          uVar4 = FUN_10017d406(param_1,0,local_4d8,0);
          pcVar2 = local_488;
          if (uVar4 == 0) {
            param_1 = local_468;
            uVar7 = FUN_100184067(local_468,uVar10 & 0xffffffff);
            pcVar8 = local_468;
            if ((*(byte *)(local_480 + 0x498) & 2) == 0) {
              if (((ulong)local_478 & 1) == 0) {
                uVar5 = FUN_100185d7d(local_468,pcVar2,uVar7,local_4d8,
                                      *(undefined8 *)(local_468 + 0x2a0),local_458);
                if (uVar5 != 0) {
                  if (uVar5 != 0xffffff80) {
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      FUN_10068b0c7(uVar5,uVar7);
                    }
                  }
                  goto LAB_100184898;
                }
LAB_1001847a3:
                param_1 = (char *)0x0;
                if (*(long *)(pcVar8 + 0x2b0) != 0) {
                  param_1 = (char *)(*(long *)(pcVar8 + 0x2b0) + lVar9);
                  _memcpy(param_1,local_458,0x420);
                  pcVar8 = local_468;
                }
              }
            }
            else if ((local_460 & 1) == 0) {
              uVar5 = FUN_100186fbd(local_468,pcVar2,uVar7,local_4d8,
                                    *(undefined8 *)(local_468 + 0x2a0),local_458);
              if (uVar5 == 0) goto LAB_1001847a3;
              if (uVar5 != 0xffffff80) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  FUN_10068b05b(uVar5,uVar7);
                }
              }
              goto LAB_100184898;
            }
          }
          else {
            pcVar8 = local_468;
            if (*local_468 == '\0') {
              uVar5 = 0xffffff80;
              if (uVar4 != 0xffffff80) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                uVar5 = uVar4;
                if (cVar3 != '\0') {
                  FUN_10068afef(uVar4,uVar7);
                }
              }
              goto LAB_100184898;
            }
          }
          uVar4 = *(uint *)(pcVar8 + 0x270);
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x420;
        lVar11 = lVar11 + 0xac0;
        uVar6 = uVar4;
      } while (uVar10 < uVar4);
    }
    local_460 = 0;
    param_1 = (char *)CONCAT71((int7)((ulong)param_1 >> 8),1);
    uVar7 = 0;
    local_478 = param_1;
    uVar5 = local_460;
  } while (((byte)local_46c & local_459 != '\0') != 0);
LAB_100184898:
  local_460 = uVar5;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_460;
}

