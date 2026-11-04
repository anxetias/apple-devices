// name: FUN_10042b75c
// address: 10042b75c

undefined8
FUN_10042b75c(long param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
             int param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_10042b4b0(param_2,param_3,param_4,param_5,param_7);
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "newTag != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffff94;
  }
  else {
    if (param_6 == 0) {
      *(int *)(lVar4 + 8) = param_2;
      *(int *)(param_1 + 0xe) =
           *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar4 + 0xc);
      FUN_1001c2470(param_1 + 0x28,lVar4);
    }
    else {
      iVar6 = 0;
      puVar1 = (undefined8 *)0x0;
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      do {
        puVar8 = puVar2;
        puVar7 = puVar1;
        if (puVar8 == (undefined8 *)0x0) break;
        puVar1 = puVar8;
        puVar2 = (undefined8 *)*puVar8;
      } while ((*(int *)(puVar8 + 1) != param_2) || (iVar6 = iVar6 + 1, iVar6 != param_6));
      *(int *)(lVar4 + 8) = param_2;
      *(int *)(param_1 + 0xe) =
           *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar4 + 0xc);
      FUN_1001c2599(param_1 + 0x28,lVar4,puVar7);
    }
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

