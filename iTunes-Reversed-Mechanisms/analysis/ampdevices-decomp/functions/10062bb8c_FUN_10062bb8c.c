// name: FUN_10062bb8c
// address: 10062bb8c

undefined8 FUN_10062bb8c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == param_2) {
    return 0;
  }
  if (DAT_1008c3430 == '\0') {
    if (DAT_1008c7910 != -1) {
      _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8,param_3,param_4,0);
    }
    DAT_1008c3430 = '\x01';
  }
  uVar1 = FUN_1002dd4d9(param_1 + 6,*(undefined2 *)(param_1 + 4),param_2 + 6,
                        *(undefined2 *)(param_2 + 4),0x1d);
  return uVar1;
}

