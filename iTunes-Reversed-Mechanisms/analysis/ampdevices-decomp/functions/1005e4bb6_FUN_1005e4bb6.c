// name: FUN_1005e4bb6
// address: 1005e4bb6

undefined8 FUN_1005e4bb6(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(short *)(param_1 + 0x62) == 2) && (*(long *)(param_1 + 0xe8) != 0)) &&
     (*(int *)(param_1 + 0xf0) != 0)) {
    cVar1 = FUN_1005e4b52(param_1);
    cVar2 = FUN_100474865(param_2);
    if (cVar1 == cVar2) {
      if (*(short *)(param_1 + 0x62) == 2) {
        FUN_1001de914(param_1 + 0xe8,&local_58,&local_5c);
        uVar3 = CONCAT44(uStack_54,local_58);
        if (DAT_1008c7b5c == 0) {
          DAT_1008c7b5c = 0xb;
          if (DAT_1008c7910 != -1) {
            _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
          }
          if (DAT_1008c7918 == '\x01') {
            DAT_1008c7b5c = DAT_1008c7b5c | 4;
          }
        }
        cVar1 = FUN_1001e339d(param_3,param_4,uVar3,local_5c);
        uVar3 = 1;
        if (cVar1 != '\0') goto LAB_1005e4ce6;
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "this->IsAnySpecialArtist() == false";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffffce);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  uVar3 = 0;
LAB_1005e4ce6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

