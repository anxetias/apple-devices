// name: FUN_1000b2760
// address: 1000b2760

void FUN_1000b2760(byte param_1)

{
  undefined1 local_e8 [16];
  undefined1 local_d8 [160];
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
                    /* WARNING: Could not recover jumptable at 0x0001000b2828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)DAT_1006f1fe0 + 0x1000b27ef))
            ((long)DAT_1006f1fe0,0x10,
             ((ulong)local_e8 ^ 0xdef8afffdfee7a17) + ((long)local_e8 * 2 & 0xbdf15fffbfdcf420U) +
             0x21075000201185e9,
             *(undefined8 *)
              ((&PTR_DAT_10082ee00)[(byte)(((param_1 | 0xd6) / 0x2e | 0xfd) - 0x2f) - 2] + -6),
             (&PTR_DAT_10082ee00)[(byte)(((param_1 | 0xd6) / 0x2e | 0xfd) - 0x2f) - 2] + -6,
             &LAB_1000c5cc0);
  return;
}

