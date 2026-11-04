// name: FUN_1005d1bb6
// address: 1005d1bb6

ulong FUN_1005d1bb6(undefined8 param_1)

{
  CC_LONG len;
  void *data;
  ulong local_48 [5];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  data = (void *)FUN_1001a8626();
  len = FUN_1001a8610(param_1);
  _CC_SHA256(data,len,(uchar *)local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return local_48[0] >> 0x38 | (local_48[0] & 0xff000000000000) >> 0x28 |
           (local_48[0] & 0xff0000000000) >> 0x18 | (local_48[0] & 0xff00000000) >> 8 |
           (local_48[0] & 0xff000000) << 8 | (local_48[0] & 0xff0000) << 0x18 |
           (local_48[0] & 0xff00) << 0x28 | local_48[0] << 0x38;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

