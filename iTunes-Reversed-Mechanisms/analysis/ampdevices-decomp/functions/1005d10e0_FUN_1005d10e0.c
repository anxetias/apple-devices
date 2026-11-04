// name: FUN_1005d10e0
// address: 1005d10e0

undefined8 FUN_1005d10e0(undefined8 param_1,undefined1 param_2,byte param_3)

{
  if (((param_3 & 0x40) == 0) && (((param_3 & 0x1c) != 0 || ((param_3 & 0x20) != 0)))) {
    FUN_1001a8c1c(param_1,&PTR_cf_com_apple_tv_external_10088fbe8);
  }
  else {
    FUN_1005d1120(param_1,param_2);
  }
  return param_1;
}

