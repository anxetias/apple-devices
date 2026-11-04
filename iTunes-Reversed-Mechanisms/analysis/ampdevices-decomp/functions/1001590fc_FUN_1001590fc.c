// name: FUN_1001590fc
// address: 1001590fc

void FUN_1001590fc(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  local_30 = param_3;
  local_28 = param_1;
  FUN_10015916e();
  uVar1 = FUN_100171f60(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,0xc,&local_28);
  local_38 = &local_30;
  lVar2 = FUN_10015a228(param_2 + 0xe0,&local_30,&DAT_100712240,&local_38,&local_21);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  return;
}

