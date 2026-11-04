// name: FUN_1001cd3a9
// address: 1001cd3a9

void FUN_1001cd3a9(ulong param_1)

{
  if ((&DAT_1008a22f0)[param_1 & 0xffffffff] != 0) {
    _IOPMAssertionRelease();
    (&DAT_1008a22f0)[param_1 & 0xffffffff] = 0;
  }
  return;
}

