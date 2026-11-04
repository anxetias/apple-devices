// name: FUN_10010bdfc
// address: 10010bdfc

void FUN_10010bdfc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  ___bzero(param_1 + 8,0x2400);
  *(long *)(param_1 + 0x2410) = param_1 + 8;
  *(undefined8 *)(param_1 + 0x2408) = 0x240000000000;
  iVar1 = FUN_100107498(*(undefined8 *)(param_1 + 0x2438),param_2);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x241c) = (uint)*(ushort *)(*(long *)(param_1 + 0x2438) + 0x1f50);
    return;
  }
  puVar2 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar2 = 0xffffff32;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,PTR_typeinfo_10082c9b0,0);
}

