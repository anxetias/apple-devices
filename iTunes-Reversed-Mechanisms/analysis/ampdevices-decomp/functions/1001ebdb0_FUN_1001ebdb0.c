// name: FUN_1001ebdb0
// address: 1001ebdb0

uint FUN_1001ebdb0(void)

{
  u_int32_t uVar1;
  
  uVar1 = _arc4random_uniform(0x10000);
  return uVar1 & 0xffff;
}

