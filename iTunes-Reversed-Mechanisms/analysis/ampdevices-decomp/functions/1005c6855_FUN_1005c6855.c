// name: FUN_1005c6855
// address: 1005c6855

char FUN_1005c6855(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 local_440;
  undefined8 local_438;
  
  local_440 = FUN_1001705fc(param_2);
  local_438 = FUN_1001705fc(param_3);
  iVar1 = FUN_1005c726a(0,0,param_1,0x22,&local_440,param_4,param_5,0);
  return (iVar1 != 0) * '\x03';
}

