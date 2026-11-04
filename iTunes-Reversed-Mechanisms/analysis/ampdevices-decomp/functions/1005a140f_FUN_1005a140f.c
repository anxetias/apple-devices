// name: FUN_1005a140f
// address: 1005a140f

undefined1 FUN_1005a140f(undefined8 param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 local_148;
  undefined1 local_147 [255];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001738c9(param_1,&local_148,0x100,0x600);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = 
      "JRCFStringGetPascalString(string, tempPString, sizeof(tempPString), kCFStringEncodingASCII)";
LAB_1005a1561:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    cVar1 = FUN_1001e0f7d(local_147,local_148);
    if (cVar1 != '\0') {
      if (param_3 == 8) {
        uVar3 = FUN_1001e1030(&local_148);
        *param_2 = uVar3;
      }
      else if (param_3 == 4) {
        uVar2 = FUN_1001e0fc3(&local_148);
        *(undefined4 *)param_2 = uVar2;
      }
      else {
        FUN_1001e0e77(local_147,local_148,param_2,param_3);
      }
      uVar4 = 1;
      goto LAB_1005a151c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "IsHexText(&tempPString[1], tempPString[0])";
      goto LAB_1005a1561;
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1005a151c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

