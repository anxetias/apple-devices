// name: FUN_10015a2c4
// address: 10015a2c4

undefined8 FUN_10015a2c4(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_30 [20];
  undefined1 local_1c [4];
  
  FUN_1001b7a44(local_30);
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,local_1c,0);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100171f60(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,5,local_1c);
  }
  FUN_1001b7a50(local_30);
  return uVar2;
}

