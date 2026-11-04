// name: FUN_1005700da
// address: 1005700da

byte FUN_1005700da(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long local_30;
  int local_24;
  
  local_30 = 0;
  local_24 = 0;
  bVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                    (*(long **)(param_1 + 0x40),param_2,&local_30,&local_24);
  return bVar1 & local_24 + local_30 <= param_3;
}

