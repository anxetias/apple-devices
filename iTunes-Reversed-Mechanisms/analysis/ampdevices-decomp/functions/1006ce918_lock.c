// name: lock
// address: 1006ce918

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::mutex::lock() */

void std::mutex::lock(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001006ce918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_lock_10082c910)();
  return;
}

