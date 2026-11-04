// name: FUN_10024bc99
// address: 10024bc99

uint FUN_10024bc99(uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = FUN_10024bd01(0x6950686e,&cf_MobileDeviceSoftwareVersionsByCarrier,0);
  if (param_1 < 2) {
    bVar1 = FUN_10024bd01(0x6950686e,&cf_MobileDeviceSoftwareVersionsByCarrier,0xffffffff);
    uVar2 = CONCAT31((int3)(param_1 >> 8),param_1 == 0 & (byte)uVar2 | bVar1);
  }
  return uVar2 & 0xffffff01;
}

