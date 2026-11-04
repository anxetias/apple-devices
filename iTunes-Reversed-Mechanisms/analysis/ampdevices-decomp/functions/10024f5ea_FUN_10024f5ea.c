// name: FUN_10024f5ea
// address: 10024f5ea

int FUN_10024f5ea(undefined8 param_1,undefined4 param_2,char param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6,code *param_7,undefined8 *param_8)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_610 [16];
  undefined1 local_600 [16];
  undefined1 local_5f0 [16];
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined1 local_5d8 [16];
  undefined8 local_5c8;
  undefined4 local_5bc;
  long local_5b8 [4];
  long *local_598;
  undefined8 local_568;
  undefined4 local_558;
  char *local_554;
  undefined2 local_54c;
  undefined8 local_54a;
  int local_44;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5e0 = param_5;
  local_5c8 = param_1;
  local_5bc = param_2;
  bVar1 = FUN_100209915();
  local_5dc = param_6;
  if ((((byte)param_6 ^ 1 | bVar1) & 1) == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_558 = 0x8220202;
      local_554 = "Assertion failure";
      local_54c = 0x822;
      local_54a = "checkInBackground == false || autoCheckForWebUpdates";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_558,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar6 = FUN_100279b99();
  iVar4 = 0x5ca;
  if (*(char *)(lVar6 + 0x1b) != '\0') goto LAB_10024f67c;
  if (param_4 == '\0' && (bVar1 & 1) == 0) {
    if (param_7 == (code *)0x0) {
      uVar5 = FUN_100416f20(local_5bc,0x10cc00fc);
      FUN_1001b7eb0(&local_558,uVar5);
      FUN_1001c334a(local_610,0x10cf0059);
      FUN_1001c334a(local_600,0x10cf0018);
      FUN_1001b7a44(local_5f0);
      if (param_3 == '\0') {
        FUN_1001c334a(local_5d8,0x5db30004);
        local_598 = (long *)0x0;
        sVar3 = FUN_10044fcd7(&local_558,local_610,local_600,local_5d8,local_5c8,local_5b8);
        if (local_598 == local_5b8) {
          lVar6 = 0x20;
LAB_10024f85b:
          (**(code **)(*local_598 + lVar6))();
        }
        else {
          lVar6 = 0x28;
          if (local_598 != (long *)0x0) goto LAB_10024f85b;
        }
        FUN_1001b7a50(local_5d8);
      }
      else {
        FUN_1001c334a(local_5d8,0x10cf0019);
        FUN_1001b80b2(local_5f0,local_5d8);
        FUN_1001b7a50(local_5d8);
        local_568 = 0;
        sVar3 = FUN_1004501a9(&local_558,local_610,local_600,local_5f0,local_5c8);
      }
      FUN_1001b7a50(local_5f0);
      FUN_1001b7a50(local_600);
      FUN_1001b7a50(local_610);
      FUN_1001b7a50(&local_558);
      if (sVar3 == 2) {
        iVar4 = -0x80;
        goto LAB_10024f67c;
      }
      if (sVar3 == 3) goto LAB_10024f67c;
    }
    else {
      cVar2 = (*param_7)(local_5c8,local_5bc);
      iVar4 = -0x80;
      if (cVar2 == '\0') goto LAB_10024f67c;
    }
  }
  cVar2 = FUN_1001a5b46();
  if (cVar2 == '\0') {
    cVar2 = FUN_1001a6446();
    iVar4 = 0x5c9;
    if (cVar2 != '\0') goto LAB_10024f67c;
  }
  FUN_1001c62d9(&local_558,0x520);
  local_558._0_3_ = CONCAT12(param_8 != (undefined8 *)0x0,CONCAT11(1,(char)local_5dc));
  local_558 = CONCAT13((byte)param_6,(undefined3)local_558) ^ 0x1000000;
  local_54a._0_6_ = CONCAT42(local_5bc,(undefined2)local_54a);
  FUN_1005f563f(local_5bc,(undefined1)local_5e0,(long)&local_54a + 6,0x100);
  iVar4 = FUN_1005f4d8f(&local_558);
  if ((iVar4 == 0) && (iVar4 = local_44, local_44 == 0 && param_8 != (undefined8 *)0x0)) {
    *param_8 = local_40;
    iVar4 = 0;
  }
LAB_10024f67c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

