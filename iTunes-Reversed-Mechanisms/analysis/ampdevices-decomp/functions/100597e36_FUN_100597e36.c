// name: FUN_100597e36
// address: 100597e36

undefined8 * FUN_100597e36(long param_1,long param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "TrackInfoIsValid(trackInfo)";
LAB_100598099:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      for (puVar4 = *(undefined8 **)(param_1 + 0x58); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        if (param_3 == '\0') {
LAB_100597ea6:
          iVar2 = FUN_10030666b(puVar4,&local_238,1);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              cVar1 = FUN_1001e3edc(param_2,&local_238,0);
              if (cVar1 != '\0') goto LAB_100598007;
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_258 = 0x8220202;
                local_254 = "Assertion failure";
                local_24c = 0x400;
                local_24a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_258,0x12
                                   );
              }
            }
          }
        }
        else if ((puVar4[1] == 0) || (*(long *)(puVar4[1] + 0x10) == 0)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x822;
            local_22a = "TrackInstanceIsValid(trackInstance)";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (*(int *)((long)puVar4 + 0x3c) != 0x53485244) goto LAB_100597ea6;
      }
      puVar4 = (undefined8 *)0x0;
      goto LAB_100598007;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "flavor != nullptr";
      goto LAB_100598099;
    }
  }
  puVar4 = (undefined8 *)0x0;
  FUN_1001782e9(0,0);
LAB_100598007:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

