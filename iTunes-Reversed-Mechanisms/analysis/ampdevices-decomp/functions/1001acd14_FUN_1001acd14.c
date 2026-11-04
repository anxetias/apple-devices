// name: FUN_1001acd14
// address: 1001acd14

undefined8 FUN_1001acd14(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    FUN_1001b7a44(param_1);
  }
  else {
    uVar1 = _CFURLResponseGetMIMEType();
    FUN_1001b7eb0(param_1,uVar1);
  }
  return param_1;
}

