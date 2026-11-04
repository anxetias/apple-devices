// name: FUN_100443b7e
// address: 100443b7e

undefined8 FUN_100443b7e(long param_1)

{
  undefined1 local_40 [24];
  undefined8 local_28 [3];
  
  if (*(long *)(param_1 + 0x4a8) != 0) {
    _AVCFPlayerItemGetCurrentTime(local_40);
    _CMTimeConvertScale(local_28,1000,1);
    return local_28[0];
  }
  return *(undefined8 *)(param_1 + 0x538);
}

