// name: FUN_1001703aa
// address: 1001703aa

undefined8 FUN_1001703aa(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *in_R8;
  char local_60 [80];
  
  pcVar2 = local_60;
  if (in_R8 != (char *)0x0) {
    pcVar2 = in_R8;
  }
  uVar1 = FUN_100170286();
  if (((int)uVar1 == 0) && (uVar1 = 0xfffffa81, *pcVar2 != '\0')) {
    uVar1 = 0;
  }
  return uVar1;
}

