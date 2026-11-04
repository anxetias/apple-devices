// name: FUN_1004e1958
// address: 1004e1958

undefined8 FUN_1004e1958(long param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_100172473(DAT_1008c4d90,param_1,0x8000100);
    local_38 = &cf_ProductType;
    uVar3 = 1;
    local_48 = uVar1;
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100172473(DAT_1008c4d90,param_2,0x8000100,1);
      local_30 = &cf_ProductVersion;
      uVar3 = 2;
      local_40 = uVar2;
    }
    uVar3 = FUN_1001713ff(DAT_1008c4d90,&local_38,&local_48,uVar3,
                          PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    FUN_10017060f(uVar2);
    FUN_10017060f(uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

