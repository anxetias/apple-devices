// name: terminate
// address: 1006ce95a

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001006ce95a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_terminate_10082c978)();
  return;
}

