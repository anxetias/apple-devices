// name: FUN_1003e3580
// address: 1003e3580

int FUN_1003e3580(long param_1,undefined4 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,undefined1 *param_6,undefined8 *param_7)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  local_68 = param_5;
  if (((uint)param_5 >> 0xc & 1) == 0) {
    for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
      cVar2 = FUN_1003b6f88(*(undefined4 *)(lVar5 + 0x28),lVar5 + 0x2c,param_2,param_3);
      if (cVar2 != '\0') {
        lVar1 = *(long *)(lVar5 + 0x4f0);
        *param_4 = lVar1;
        if (lVar1 != 0) {
          *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
        }
        if (param_6 != (undefined1 *)0x0) {
          *param_6 = *(undefined1 *)(lVar5 + 0x4f8);
        }
        iVar3 = 0;
        if (param_7 != (undefined8 *)0x0) {
          *param_7 = *(undefined8 *)(lVar5 + 0x4fc);
        }
        goto LAB_1003e36ff;
      }
    }
  }
  local_60 = param_6;
  iVar3 = FUN_1005d38c7(0,0,param_4);
  if (iVar3 == 0) {
    lVar5 = FUN_1003ae1f8();
    iVar3 = 0;
    if (lVar5 != 0) {
      FUN_1001c62d9(&local_58,0x20);
      local_58 = 0x61727477;
      if (param_4 == (long *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = *param_4;
      }
      uStack_4a = 0xffff;
      iVar3 = FUN_1003e2532(param_2,param_3,lVar5,lVar5 + 0x1660,&local_58,0,local_68,local_6c);
      if (iVar3 == 0) {
        if (local_60 != (undefined1 *)0x0) {
          *local_60 = local_54._4_1_;
        }
        if (param_7 != (undefined8 *)0x0) {
          *param_7 = CONCAT26(uStack_46,CONCAT24(uStack_48,CONCAT22(uStack_4a,local_4c)));
        }
      }
      FUN_1003ae783(lVar5 + 0x4ca8);
      FUN_1001c64c1(lVar5);
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      uStack_4a = (undefined2)iVar3;
      uStack_48 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_1003e36ff:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

