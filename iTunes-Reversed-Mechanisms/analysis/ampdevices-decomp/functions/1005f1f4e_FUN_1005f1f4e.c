// name: FUN_1005f1f4e
// address: 1005f1f4e

ulong FUN_1005f1f4e(undefined8 param_1,int param_2,int *param_3,int param_4)

{
  ushort *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 local_90 [4];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_1;
  FUN_1005e9a2c();
  puVar10 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != (undefined4 *)0x0 && param_4 != 0) {
    do {
      if (puVar10[0x1a21] == param_4) goto LAB_1005f1fb1;
      puVar2 = (undefined8 *)(puVar10 + 0x1a1e);
      puVar10 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_1005f1fb1:
  if (param_2 == 0x74646463) {
    if (*param_3 == 0x656a6374) {
      puVar10 = DAT_1008c7bc0;
      if (DAT_1008c7bc0 != (undefined4 *)0x0 && param_4 != 0) {
        do {
          if (puVar10[0x1a21] == param_4) {
            if (*(long *)(puVar10 + 0x1a24) == 0) {
              uVar8 = 0;
            }
            else {
              uVar7 = FUN_100265f2b();
              uVar8 = (ulong)uVar7;
              if ((uVar7 != 0xffffff80) && (uVar7 != 0)) {
                uVar9 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar9,0x10);
                if (cVar6 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,uVar7);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
            }
            FUN_1005ed5a2(&DAT_1008c7b60,puVar10);
            goto LAB_1005f229e;
          }
          puVar10 = *(undefined4 **)(puVar10 + 0x1a1e);
        } while (puVar10 != (undefined4 *)0x0);
      }
      uVar9 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar9,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "device != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar8 = 0x4e31;
LAB_1005f229e:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return uVar8;
      }
      goto LAB_1005f2360;
    }
  }
  else if (param_2 == 0x74647070) {
    lVar4 = *(long *)(param_3 + 4);
    iVar3 = param_3[2];
    if ((iVar3 + 0x8f939e97U < 0xc) &&
       (uVar8 = 0xffffffce, (0x809U >> (iVar3 + 0x8f939e97U & 0x1f) & 1) != 0)) goto LAB_1005f229e;
    if (iVar3 == 0x6770706d) {
      uVar8 = FUN_100318904(local_60,0x74647070,param_3);
      puVar1 = (ushort *)(*(long *)(lVar4 + 0x10) + 0x20);
      *puVar1 = *puVar1 & 0xfffe;
      puVar1 = (ushort *)(*(long *)(lVar4 + 0x10) + 0x20);
      *puVar1 = *puVar1 & 0xfff7;
      puVar1 = (ushort *)(*(long *)(lVar4 + 0x10) + 0x20);
      *puVar1 = *puVar1 & 0xffef;
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return uVar8;
      }
      goto LAB_1005f2360;
    }
    if (iVar3 == 0x706c6461) {
      *(undefined1 *)(lVar4 + 0x26) = 0;
      goto LAB_1005f229b;
    }
  }
  else if (param_2 == 0x74646773) {
    if (*param_3 == 0x656a6374) {
      bVar5 = FUN_10039e077(param_4,1,0);
      param_3[2] = (uint)(bVar5 ^ 1);
      FUN_1001b7a44(local_70);
      if ((char)param_3[1] == '\0') {
        FUN_1001c334a(local_90,0x880010);
        if (puVar10 == (undefined4 *)0x0) {
          uVar9 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar9,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "device != nullptr";
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          uVar11 = 0x69506f64;
          FUN_1001782e9(0,0);
        }
        else {
          uVar11 = *puVar10;
        }
        FUN_100247fe5(&local_58,uVar11,0,0);
        FUN_1001bbec4(local_80,local_90,&local_58);
        FUN_1001b80b2(local_70,local_80);
        FUN_1001b7a50(local_80);
        FUN_1001b7a50(&local_58);
        puVar10 = local_90;
      }
      else {
        FUN_1001c334a(&local_58,0x88000e);
        FUN_1001b80b2(local_70,&local_58);
        puVar10 = &local_58;
      }
      FUN_1001b7a50(puVar10);
      FUN_1001bb41a(local_70,*(undefined8 *)(param_3 + 4));
      FUN_1001b7a50(local_70);
    }
    else {
      if (*param_3 != 0x72736477) goto LAB_1005f208f;
      param_3[2] = 1;
    }
LAB_1005f229b:
    uVar8 = 0;
    goto LAB_1005f229e;
  }
LAB_1005f208f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    uVar8 = FUN_100318904(local_60,param_2,param_3);
    return uVar8;
  }
LAB_1005f2360:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

