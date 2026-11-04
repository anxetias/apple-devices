// name: FUN_1005d0578
// address: 1005d0578

int FUN_1005d0578(long param_1,long param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_1d2 [8];
  short local_1ca;
  undefined4 local_1c8;
  char *local_1c4;
  undefined2 local_1bc;
  undefined8 local_1ba;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_1c8 = 0x8220202;
      local_1c4 = "Assertion failure";
      local_1bc = 0x822;
      local_1ba = "strVoice != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_1c8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    FUN_1005cec66();
    sVar2 = _CountVoices(&local_1ca);
    if (sVar2 == -0x80) {
      iVar5 = -0x80;
    }
    else if (sVar2 == 0) {
      if (0 < local_1ca) {
        sVar2 = 1;
        do {
          sVar3 = _GetIndVoice((int)sVar2,local_1d2);
          if (sVar3 != 0) {
            if (sVar3 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,(int)sVar3);
LAB_1005d08e5:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            break;
          }
          FUN_1001c62d9(&local_1c8,0x16a);
          sVar3 = _GetVoiceDescription(local_1d2,&local_1c8,0x16a);
          if (sVar3 != 0) {
            if (sVar3 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,(int)sVar3);
                goto LAB_1005d08e5;
              }
            }
            break;
          }
          cVar1 = FUN_1001e4ee1((long)&local_1ba + 2,param_2,1);
          if (cVar1 != '\0') {
            _memcpy((void *)(param_1 + 0xc),&local_1c8,0x16a);
            *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
            iVar5 = 0;
            goto LAB_1005d07b4;
          }
          sVar2 = sVar2 + 1;
        } while (sVar2 <= local_1ca);
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "foundVoice";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0xf4;
    }
    else {
      iVar5 = (int)sVar2;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_1c8 = 0x8220202;
        local_1c4 = "Assertion failure";
        local_1bc = 0x400;
        local_1ba = (char *)CONCAT44(local_1ba._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_1c8,0x12);
      }
    }
LAB_1005d07b4:
    FUN_1001e9eb9(param_1 + 0x180);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

