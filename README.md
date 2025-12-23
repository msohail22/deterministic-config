# deterministic-config

Startup-only, immutable configuration for low-latency / HFT systems.

This library ingests environment-based configuration at process startup,
validates and compiles it into a fully typed, deterministic configuration
object, and makes it available to the system with zero runtime overhead.

Configuration is parsed exactly once.
After initialization, all configuration state is immutable.
No runtime mutation, hot reload, or dynamic lookups are supported by design.

This is infrastructure for systems where determinism, correctness, and
hot-path performance matter more than flexibility.
