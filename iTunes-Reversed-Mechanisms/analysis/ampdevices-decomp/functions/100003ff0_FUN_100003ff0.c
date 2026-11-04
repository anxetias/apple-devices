// name: FUN_100003ff0
// address: 100003ff0

void FUN_100003ff0(long param_1,undefined8 param_2,int param_3)

{
  uint in_EAX;
  int unaff_EBX;
  uint uVar1;
  bool bVar2;
  
  uVar1 = unaff_EBX * 2 + 0x2b242a4e;
  uVar1 = (uVar1 << (((byte)param_3 ^ 0xc4) & 0x1f) & 0xdddfdfb4) + (uVar1 ^ 0xeeefefdb) +
          0x5403dbc2;
  bVar2 = in_EAX < uVar1;
  if (in_EAX < 0x42f3cb9d != uVar1 < 0x42f3cb9d) {
    bVar2 = uVar1 < 0x42f3cb9d;
  }
                    /* WARNING: Could not recover jumptable at 0x000100004062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)(&switchD_100005882::switchdataD_1006cfa50)[(int)((uint)bVar2 + param_3)] +
            param_1))();
  return;
}

