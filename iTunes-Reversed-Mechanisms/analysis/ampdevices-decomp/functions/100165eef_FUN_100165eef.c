// name: FUN_100165eef
// address: 100165eef

undefined8
FUN_100165eef(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = in_RAX;
  iVar1 = FUN_100180f0c(param_2,param_1,&local_28,param_3);
  if (iVar1 != 0) {
    if (param_4 == (undefined8 *)0x0) {
      local_28 = 0;
    }
    else {
      uVar2 = FUN_10017157f(param_1,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080,(long)iVar1
                            ,0);
      *param_4 = uVar2;
      local_28 = 0;
    }
  }
  return local_28;
}

