// name: FUN_100410867
// address: 100410867

void FUN_100410867(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a5c();
  lVar3 = FUN_1001b8378(param_3);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "basePathITString.GetUTF16Length() > 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_1001ba114(param_2,param_3,0);
    if (cVar1 != '\0') {
      FUN_1001b7b04(local_68,".");
      iVar2 = FUN_1001b8378(param_3);
      FUN_1001ba6e0(local_58,param_2,(long)(iVar2 + -1),0xffffffffffffffff);
      FUN_1001b7a5c(&local_48,local_68);
      FUN_1001bbcfe(&local_48,local_58);
      FUN_1001b80b2(param_1,&local_48);
      FUN_1001b7a50(&local_48);
      FUN_1001b7a50(local_58);
      FUN_1001b7a50(local_68);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

