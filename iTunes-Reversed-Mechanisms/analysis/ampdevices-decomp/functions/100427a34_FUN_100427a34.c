// name: FUN_100427a34
// address: 100427a34

void FUN_100427a34(undefined8 param_1,byte param_2,ushort *param_3,int param_4,long param_5,
                  ulong param_6,undefined4 *param_7)

{
  ushort uVar1;
  char cVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 local_158 [256];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_7 = 0;
  if (param_4 != 0 && param_3 != (ushort *)0x0) {
    if (param_2 == 0) {
      puVar3 = local_158;
      if ((param_4 < 0x100) ||
         (puVar3 = (undefined1 *)FUN_1001c63e1(param_4), puVar3 != (undefined1 *)0x0)) {
        FUN_100427c38(param_1,0,param_3,param_4,puVar3,param_4,&local_58);
        FUN_10042753a(param_1,puVar3,local_58,param_5,param_6 & 0xffffffff,param_7);
        if (puVar3 != local_158) {
          FUN_1001c64c1(puVar3);
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "textPtr != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else if (param_2 < 3) {
      if (param_2 == 1) {
        if (param_4 < 2) goto LAB_100427bc6;
        uVar1 = *param_3;
        uVar7 = uVar1 << 8 | uVar1 >> 8;
        if ((uVar7 == 0xfffe) || (bVar11 = true, uVar7 == 0xfeff)) {
          bVar11 = uVar1 != 0xfffe;
          param_4 = param_4 + -2;
          param_3 = param_3 + 1;
        }
      }
      else {
        bVar11 = false;
      }
      uVar10 = param_4 >> 1;
      uVar8 = param_6 & 0xffffffff;
      if (uVar10 < (uint)param_6) {
        uVar8 = (ulong)uVar10;
      }
      uVar5 = 0;
      if ((int)uVar8 != 0) {
        uVar9 = (uint)param_6;
        if ((ulong)uVar10 < (param_6 & 0xffffffff)) {
          uVar9 = uVar10;
        }
        uVar4 = 0;
        do {
          uVar1 = param_3[uVar4];
          uVar7 = uVar1 << 8 | uVar1 >> 8;
          if (bVar11) {
            uVar7 = uVar1;
          }
          uVar5 = uVar4;
          if (uVar7 == 0) break;
          *(ushort *)(param_5 + uVar4 * 2) = uVar7;
          uVar4 = uVar4 + 1;
          uVar5 = uVar8;
        } while (uVar9 != (uint)uVar4);
      }
      *param_7 = (int)uVar5;
    }
  }
LAB_100427bc6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

