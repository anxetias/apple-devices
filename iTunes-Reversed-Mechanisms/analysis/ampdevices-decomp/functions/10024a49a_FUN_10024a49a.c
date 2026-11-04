// name: FUN_10024a49a
// address: 10024a49a

undefined8 FUN_10024a49a(undefined8 param_1,int *param_2)

{
  undefined1 local_28 [16];
  
  FUN_1001b7a44();
  if (*param_2 == 0x73766d64) {
    FUN_1001b81f2(param_1,*(undefined8 *)(param_2 + 2));
  }
  else if (*param_2 == 0x73766970) {
    FUN_1001e2af1(local_28,param_2 + 2,1);
    FUN_1001b80b2(param_1,local_28);
    FUN_1001b7a50(local_28);
  }
  return param_1;
}

