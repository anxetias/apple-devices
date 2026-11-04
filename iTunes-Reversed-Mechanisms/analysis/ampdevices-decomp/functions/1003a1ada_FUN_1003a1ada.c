// name: FUN_1003a1ada
// address: 1003a1ada

void FUN_1003a1ada(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  char local_69;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x1013;
      local_58 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1003a1e40;
  }
  plVar1 = (long *)(param_1 + 0x98);
  FUN_1001de750(plVar1);
  *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) & 0xfb;
  FUN_1001b811c(param_1 + 0xa8);
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    break;
  case 2:
    local_69 = '\0';
    if ((((*(long *)(param_1 + 0xb8) == 0) || (*(int *)(param_1 + 0xc0) == 0)) &&
        ((*plVar1 == 0 || (*(int *)(param_1 + 0xa0) == 0)))) &&
       (uVar6 = FUN_1003a1ec0(param_1), (uVar6 & 0x10402) == 0 || (uVar6 & 0xfffefbfd) == 0)) {
      local_68._0_4_ = 0x8569c0;
      local_68._4_4_ = 1;
      local_60 = (undefined4)param_1;
      uStack_5c = (undefined2)((ulong)param_1 >> 0x20);
      uStack_5a = (undefined2)((ulong)param_1 >> 0x30);
      local_58 = SUB86(&local_69,0);
      uStack_52 = (undefined2)((ulong)&local_69 >> 0x30);
      local_48 = &local_68;
      FUN_1003a0178(param_1,1,&local_68);
      if (local_48 == &local_68) {
        lVar7 = 0x20;
      }
      else {
        lVar7 = 0x28;
        if (local_48 == (long *)0x0) goto LAB_1003a1cae;
      }
      (**(code **)(*local_48 + lVar7))();
    }
LAB_1003a1cae:
    if (local_69 == '\0') {
      if (((*plVar1 == 0) || (*(int *)(param_1 + 0xa0) == 0)) &&
         (cVar4 = FUN_100273f7c(param_1), cVar4 != '\0')) {
        if (*(int *)(param_1 + 0x14) != 1) {
          FUN_1001c334a(&local_68,0xfa004f);
          FUN_1001b80b2(param_1 + 0xa8,&local_68);
          FUN_1001b7a50(&local_68);
          goto LAB_1003a1e32;
        }
        lVar7 = *(long *)(param_1 + 0x60);
        if (lVar7 == 0) break;
        lVar3 = *(long *)(lVar7 + 0x10);
        *(ushort *)(param_1 + 0xf8) = *(ushort *)(param_1 + 0xf8) | 4;
        uVar2 = *(undefined4 *)(lVar7 + 0xd8);
      }
      else {
        if ((*(int *)(param_1 + 0x14) != 1) || ((*plVar1 != 0 && (*(int *)(param_1 + 0xa0) != 0))))
        {
LAB_1003a1e23:
          FUN_1001de8d6(plVar1,param_1 + 0xb8);
LAB_1003a1e32:
          *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) | 4;
          break;
        }
        lVar3 = *(long *)(param_1 + 0x48);
        if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
          FUN_10055ea6a(param_1);
        }
        lVar7 = *(long *)(param_1 + 0x60);
        uVar6 = FUN_100474dd0(lVar7,0);
        if ((uVar6 & 0xc00008) == 0) {
          if (((*(int *)(lVar7 + 0xdc) != 0) || (*(int *)(lVar7 + 0xe4) != 0)) ||
             (*(int *)(lVar7 + 0xe0) != 0)) goto LAB_1003a1e23;
          uVar5 = *(ushort *)(param_1 + 0xf8) & 0xfffb;
        }
        else {
          if (*(int *)(lVar7 + 0xe4) != 0) goto LAB_1003a1e23;
          uVar5 = (ushort)*(undefined4 *)(param_1 + 0xf8) | 4;
        }
        *(ushort *)(param_1 + 0xf8) = uVar5;
        uVar2 = *(undefined4 *)(lVar7 + 0xd8);
      }
      FUN_1001de8c6(plVar1,lVar3 + 0x1c10,uVar2);
    }
    break;
  case 3:
    *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) & 0xfb;
  case 4:
    FUN_1001de8d6(plVar1,param_1 + 0xb8);
    break;
  default:
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x16bc;
      local_58 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) | 0x20;
LAB_1003a1e40:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

