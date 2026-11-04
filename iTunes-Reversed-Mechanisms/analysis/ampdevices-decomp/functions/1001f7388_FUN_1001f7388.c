// name: FUN_1001f7388
// address: 1001f7388

int FUN_1001f7388(int *param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 local_c78 [64];
  undefined1 local_c38 [3080];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c8d63(uVar3);
    }
  }
  else {
    *param_3 = 0;
    cVar1 = FUN_10017cbd0();
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c8ced(uVar3);
      }
    }
    else {
      if (*param_1 != 0x41464350) {
        if (1 < param_2 - 1U) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c8a33(uVar3);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x36;
          goto LAB_1001f7446;
        }
        iVar2 = FUN_1001823de(param_1,local_c38,0xbfe);
        if (iVar2 == -0x80) goto LAB_1001f7446;
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c8c0b(iVar2,uVar3);
          }
          goto LAB_1001f7446;
        }
        puVar4 = (undefined4 *)FUN_1001c6429(0x440);
        if (puVar4 == (undefined4 *)0x0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c8b95(uVar3);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x6c;
          goto LAB_1001f7446;
        }
        *puVar4 = 0x7a697066;
        _memcpy(puVar4 + 2,param_1,0x420);
        FUN_1001a70c6(local_c78);
        if (param_2 == 2) {
          lVar5 = FUN_1001f4fe2(local_c38,2,0,local_c78);
          *(long *)(puVar4 + 0x10c) = lVar5;
          if (lVar5 != 0) {
LAB_1001f75e9:
            *param_3 = puVar4;
            iVar2 = 0;
            goto LAB_1001f7446;
          }
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c8b1f(uVar3);
          }
        }
        else {
          lVar5 = FUN_1001f01a7(local_c38,local_c78);
          *(long *)(puVar4 + 0x10a) = lVar5;
          if (lVar5 != 0) goto LAB_1001f75e9;
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c8aa9(uVar3);
          }
        }
        FUN_1001782e9(0,0);
        FUN_1001c64c1(puVar4);
        iVar2 = -0x17;
        goto LAB_1001f7446;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c8c77(uVar3);
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1001f7446:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

