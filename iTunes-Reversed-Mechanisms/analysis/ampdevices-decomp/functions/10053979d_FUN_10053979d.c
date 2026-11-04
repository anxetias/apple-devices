// name: FUN_10053979d
// address: 10053979d

undefined8 FUN_10053979d(undefined8 param_1,long param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 local_90 [16];
  long local_80;
  undefined8 local_78;
  uint local_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_6c = param_3;
  FUN_1001b7a44(local_68);
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inBitFields != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1001b7b04(&local_58,"{ ");
    local_78 = param_1;
    FUN_1001bbcfe(local_68,&local_58);
    FUN_1001b7a50(&local_58);
    uVar3 = 0;
    uVar4 = 0;
    local_80 = param_2;
    do {
      cVar1 = FUN_10053916d(param_2,uVar3 & 0xffffffff);
      if (cVar1 != '\0') {
        if (uVar4 != 0) {
          if ((uVar4 + 1 & 7) == 0) {
            FUN_1001b7b04(&local_58,"\n");
            FUN_1001bbcfe(local_68,&local_58);
          }
          else {
            FUN_1001b7b04(&local_58,", ");
            FUN_1001bbcfe(local_68,&local_58);
          }
          FUN_1001b7a50(&local_58);
        }
        FUN_1001b7a44(&local_58);
        if ((local_6c & 1) != 0) {
          FUN_1001bb832(local_90,uVar3);
          FUN_1001b80b2(&local_58,local_90);
          FUN_1001b7a50(local_90);
        }
        FUN_1001bb78a(local_90,"%u",uVar3 & 0xffffffff);
        FUN_1001bbcfe(local_68,local_90);
        FUN_1001b7a50(local_90);
        cVar1 = FUN_1001b8428(&local_58);
        if (cVar1 == '\0') {
          uVar2 = FUN_1001b8336(&local_58);
          FUN_1001bb78a(local_90," (%S)",uVar2);
          FUN_1001bbcfe(local_68,local_90);
          FUN_1001b7a50(local_90);
        }
        FUN_1001b7a50(&local_58);
        param_2 = local_80;
        uVar4 = uVar4 + 1;
      }
      param_1 = local_78;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x100);
    if (uVar4 == 0) {
      FUN_1001b7b04(&local_58,"<none>");
      FUN_1001bbcfe(local_68,&local_58);
      FUN_1001b7a50(&local_58);
    }
    FUN_1001b7b04(&local_58," }");
    FUN_1001bbcfe(local_68,&local_58);
    FUN_1001b7a50(&local_58);
    FUN_1001b7a88(param_1,local_68);
  }
  FUN_1001b7a50(local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

