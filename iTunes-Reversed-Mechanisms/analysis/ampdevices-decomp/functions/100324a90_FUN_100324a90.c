// name: FUN_100324a90
// address: 100324a90

undefined4 FUN_100324a90(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1002eb77e(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        (undefined8 *)(param_1 + 0x30));
  FUN_100324b14();
  puVar1 = PTR__kCFTypeArrayCallBacks_10082e130;
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar3 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    uVar3 = FUN_100170720(DAT_1008c4d90,0,puVar1);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
  }
  return uVar2;
}

