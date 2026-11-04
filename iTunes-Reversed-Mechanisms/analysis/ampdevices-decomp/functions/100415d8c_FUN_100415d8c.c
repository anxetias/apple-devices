// name: FUN_100415d8c
// address: 100415d8c

int FUN_100415d8c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined8 *param_6)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  size_t sVar9;
  size_t sVar10;
  undefined1 local_a8 [16];
  size_t local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x822;
      local_7a = "outInfoMessage != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_6 != (undefined8 *)0x0) {
      iVar3 = 0;
      if (param_2 == 0xca) {
        iVar3 = param_2;
      }
      if (param_2 == 0xc9) {
        iVar3 = param_2;
      }
      local_90 = 0;
      local_8c = 0;
      iVar3 = FUN_10002baa0(*(undefined4 *)(param_1 + 0x14),iVar3);
      if (iVar3 == 0) {
        FUN_1001a833e(local_a8,0,local_90,0);
        FUN_1001a7b1c(param_5,local_a8);
        FUN_1001a85d4(local_a8);
        uVar8 = (ulong)local_8c;
        sVar10 = uVar8 * 4;
        pvVar1 = (void *)*param_6;
        uVar5 = param_6[2];
        if ((ulong)((long)(uVar5 - (long)pvVar1) >> 2) < uVar8) {
          if (pvVar1 != (void *)0x0) {
            param_6[1] = pvVar1;
            operator_delete(pvVar1);
            *param_6 = 0;
            param_6[1] = 0;
            param_6[2] = 0;
            uVar5 = 0;
          }
          uVar6 = (long)uVar5 >> 1;
          if ((ulong)((long)uVar5 >> 1) <= uVar8) {
            uVar6 = uVar8;
          }
          uVar8 = 0x3fffffffffffffff;
          if (uVar5 < 0x7ffffffffffffffc) {
            uVar8 = uVar6;
          }
          FUN_1001bd55c(param_6,uVar8);
          pvVar1 = (void *)param_6[1];
          _memmove(pvVar1,&local_88,sVar10);
          param_6[1] = (void *)((long)pvVar1 + sVar10);
        }
        else {
          pvVar7 = (void *)param_6[1];
          sVar9 = (long)pvVar7 - (long)pvVar1;
          local_98 = sVar10;
          if ((ulong)((long)sVar9 >> 2) < uVar8) {
            if (pvVar7 != pvVar1) {
              _memmove(pvVar1,&local_88,sVar9);
              pvVar7 = (void *)param_6[1];
            }
            sVar10 = local_98 - sVar9;
            if (sVar10 != 0) {
              _memmove(pvVar7,(void *)((long)&local_88 + sVar9),sVar10);
            }
            param_6[1] = (long)pvVar7 + sVar10;
          }
          else {
            if (uVar8 != 0) {
              _memmove(pvVar1,&local_88,sVar10);
            }
            param_6[1] = (void *)((long)pvVar1 + sVar10);
          }
        }
      }
      else {
        FUN_1001a7bd2(param_5,0);
        param_6[1] = *param_6;
      }
      goto LAB_100415e8b;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x822;
      local_7a = "outIndices != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_100415e8b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

