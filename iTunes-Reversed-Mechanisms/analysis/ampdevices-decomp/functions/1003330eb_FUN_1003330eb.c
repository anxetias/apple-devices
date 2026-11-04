// name: FUN_1003330eb
// address: 1003330eb

undefined8 FUN_1003330eb(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  uVar2 = FUN_100333169(param_1);
  if ((uVar2 & 0x9e0) != 0) {
    FUN_1001709a5(uVar1,&cf_Media);
  }
  if (((uint)uVar2 >> 0xc & 1) != 0) {
    FUN_1001709a5(uVar1,&cf_Book);
  }
  if (0x1fff < uVar2) {
    FUN_1001709a5(uVar1,&cf_Photo);
  }
  return uVar1;
}

