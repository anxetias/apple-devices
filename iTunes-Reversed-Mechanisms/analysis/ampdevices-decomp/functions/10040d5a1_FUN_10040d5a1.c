// name: FUN_10040d5a1
// address: 10040d5a1

undefined8 FUN_10040d5a1(long param_1,long param_2,undefined8 param_3,short *param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long local_98;
  long local_90;
  long local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "fileDataArray != nullptr";
LAB_10040d847:
      uStack_6c = 0x822;
      local_70 = 1;
      uStack_74 = 0x7a0a90;
      local_78 = 0x8220202;
      uStack_6a = SUB82(pcVar6,0);
      local_68 = (undefined6)((ulong)pcVar6 >> 0x10);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "fileData != nullptr";
      goto LAB_10040d847;
    }
  }
  else {
    cVar1 = FUN_10017cbd0(param_3);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        pcVar6 = "JRFileSpecIsValid(parentSpec)";
        goto LAB_10040d847;
      }
    }
    else {
      if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        lVar2 = FUN_100170dc5(DAT_1008c4d90,param_3,0x420);
        if (lVar2 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_78 = 0x8220202;
            uStack_74 = 0x7a0a90;
            local_70 = 1;
            uStack_6c = 0x822;
            uStack_6a = 0xc66e;
            local_68 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
          }
          FUN_1001782e9(0,0);
        }
        lVar4 = FUN_1001658f1(DAT_1008c4d90,param_4);
        if (lVar4 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_78 = 0x8220202;
            uStack_74 = 0x7a0a90;
            local_70 = 1;
            uStack_6c = 0x822;
            uStack_6a = 0x1082;
            local_68 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
          }
          FUN_1001782e9(0,0);
        }
        local_78 = 0x872b10;
        uStack_74 = 1;
        local_70 = 0x87eb10;
        uStack_6c = 1;
        uStack_6a = 0;
        local_68 = 0x1008730b0;
        uStack_62 = 0;
        local_98 = param_2;
        local_90 = lVar2;
        local_88 = lVar4;
        lVar5 = FUN_1001713ff(DAT_1008c4d90,&local_78,&local_98,3,
                              PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar5 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "fileDict != nullptr";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_1001709a5(param_1,lVar5);
        FUN_10017060f(lVar4);
        FUN_10017060f(lVar2);
        FUN_10017060f(lVar5);
        uVar3 = 0;
        goto LAB_10040d87a;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        pcVar6 = "fileName != nullptr && fileName[0] != 0";
        goto LAB_10040d847;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_10040d87a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

