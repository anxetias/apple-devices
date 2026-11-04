// name: ~bad_alloc
// address: 10091d200

/* WARNING: Control flow encountered bad instruction data */
/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

