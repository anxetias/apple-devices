// name: FUN_1001a99e8
// address: 1001a99e8

undefined8 FUN_1001a99e8(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    FUN_10032f0f2(param_1);
  }
  else {
    uVar1 = _CFPropertyListCreateData(0,*param_2,200,0,0);
    FUN_1001a78d6(param_1,uVar1);
  }
  return param_1;
}

